/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00125f00 */

void FUN_ram_00125f00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (*(uint *)(param_1 + 0x6ac) < 100) {
    FUN_ram_0011b9f4(param_1,*(undefined1 *)(param_1 + 0x6b4));
  }
  else if (*(uint *)(param_1 + 0x69c) < 100) {
    FUN_ram_0011b9f4(param_1,*(undefined1 *)(param_1 + 0x6b4));
  }
  else {
    if ((((*(char *)(param_1 + 100) == '\0') && (*(char *)(param_1 + 0x65) != '\x02')) &&
        ((*(ushort *)(param_1 + 0x6e) & 0x20) == 0 && (*(ushort *)(param_1 + 0x6e) & 0x40) == 0)) &&
       ((*(uint *)(param_1 + 0x3c2) & 0x20) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
    iVar1 = FUN_ram_0013d7d4(param_1 + 0x6a4,param_1 + 0x694,uVar2);
    if (iVar1 == 0) {
      FUN_ram_0011b9f4(param_1,1);
      *(undefined1 *)(param_1 + 0x6b4) = 1;
    }
    else {
      FUN_ram_0011b9f4(param_1,0);
      *(undefined1 *)(param_1 + 0x6b4) = 0;
    }
  }
  if (2 < DAT_ram_8002c228) {
    FUN_ram_000ee260(s_GI____pM__GI_select_chose__u_ram_001c3904,param_1 + 0x96,
                     *(undefined1 *)(param_1 + 0x682));
  }
  return;
}


