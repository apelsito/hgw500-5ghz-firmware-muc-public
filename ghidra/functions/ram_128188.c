/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00128188 */

int FUN_ram_00128188(int param_1)

{
  char cVar1;
  char local_c;
  char local_b [3];
  
  if (DAT_ram_0018c010 == 3) {
    (*DAT_ram_002017d0)();
  }
  else {
    FUN_ram_00170028(&local_c,local_b);
  }
  if ((local_c == '\a') && (local_b[0] == '\0')) {
    cVar1 = (char)DAT_ram_800261dc;
  }
  else {
    cVar1 = (char)*(undefined4 *)(param_1 + 0x44c);
  }
  return (int)(char)(cVar1 + '\x06');
}


