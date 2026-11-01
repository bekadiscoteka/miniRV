def convert_hex_to_byte_addressable(input_file, output_file):
    with open(input_file, 'r') as f_in, open(output_file, 'w') as f_out:
        # Skip header if present (based on your file content "v3.0 hex words addressed")
        lines = f_in.readlines()
        
        byte_address = 0
        
        for line in lines:
            line = line.strip()
            if not line or line.startswith('v'): # Skip version header
                continue
            
            # Remove the address label (e.g., "00000:") from the start
            parts = line.split(':')
            if len(parts) < 2:
                continue
            
            # Get the hex data words
            hex_words = parts[1].strip().split()
            
            for word in hex_words:
                # Pad to 8 characters just in case
                word = word.zfill(8)
                
                # Unpack 32-bit word to 4 bytes (Little Endian)
                # Word: AABBCCDD -> Bytes: DD CC BB AA
                bytes_list = [word[6:8], word[4:6], word[2:4], word[0:2]]
                
                for byte in bytes_list:
                    # Write in @ADDRESS DATA format
                    f_out.write(f"@{byte_address:08x} {byte}\n")
                    byte_address += 1

# Usage
if __name__ == '__main__':
    import sys
    if len(sys.argv) != 3:
        sys.exit(f'usage: {sys.argv[0]} <input.hex> <output_byte_addressed.hex>')
    convert_hex_to_byte_addressable(sys.argv[1], sys.argv[2])
