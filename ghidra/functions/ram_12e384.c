/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e384 */

undefined4 FUN_ram_0012e384(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0xd28);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_ram_0010914c(param_1,1,0x80);
    if (piVar2 == (int *)0x0) {
      DAT_ram_80037850 = DAT_ram_80037850 + 1 | 0x80000000;
      return 0xfffffff4;
    }
    iVar1 = FUN_ram_000f9640(*(undefined4 *)(param_1 + 0x3b20),piVar2 + 1,0x80);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      FUN_ram_00109920(param_1,piVar2);
      DAT_ram_80037850 = DAT_ram_80037850 | 0x40000000;
      return 0xfffffff0;
    }
    piVar2[0x14] = 5;
    *(int **)(param_2 + 0xd28) = piVar2;
  }
  piVar2[5] = param_2;
  return 1;
}


