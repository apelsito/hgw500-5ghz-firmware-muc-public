/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb210 */

void FUN_ram_000fb210(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  iVar1 = 2;
  do {
    *(uint *)((uint)(cVar2 != '\0') * 0x100000 + 0x301c + *(int *)(param_1 + 0xc)) =
         (param_2 & 3) << 4;
    FUN_ram_000fafac(param_1,cVar2);
    cVar2 = cVar2 + '\x01';
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


