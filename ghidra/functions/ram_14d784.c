/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014d784 */

undefined4 FUN_ram_0014d784(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(byte *)(param_2 + 0x52c);
  if (uVar2 != 0) {
    if (uVar2 < 10) {
      *(undefined1 *)(param_1 + 0x3fed + uVar2) = 0;
    }
    *(undefined1 *)(param_2 + 0x52c) = 0;
  }
  iVar3 = 9;
  iVar1 = 0;
  LP_START = 0x14d7d0;
  LP_END = 0x14d7e4;
  do {
    if (*(char *)(param_1 + 0x3f80 + iVar1 + 0x6e) == '\0') {
      *(undefined1 *)(param_1 + 0x3f80 + iVar1 + 0x6e) = 1;
      *(char *)(param_2 + 0x52c) = (char)iVar1 + '\x01';
      if (DAT_ram_8002c8bd == '\x03') {
        FUN_ram_000ee260(s_PSEL__Allocated_slot__u_qn__p_ram_001c6a54);
      }
      return 1;
    }
    iVar1 = iVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)(param_2 + 0x52c) = 0;
  if (DAT_ram_8002c8bd == '\x03') {
    FUN_ram_000ee260(s_PSEL__Failed_to_allocate_slot_qn_ram_001c6a2c,param_2);
  }
  return 0;
}


