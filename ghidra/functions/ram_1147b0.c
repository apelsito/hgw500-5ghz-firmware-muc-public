/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001147b0 */

void FUN_ram_001147b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  local_28 = 0;
  local_24 = 0;
  sVar2 = *(short *)(param_2 + 0xe);
  uVar3 = (uint)*(ushort *)(param_2 + 0xc);
  if (sVar2 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(param_2 + 8) + uVar3 * 0x10);
      if (iVar4 != 0) {
        if (param_3 == 0) {
          DAT_ram_80037008 = DAT_ram_80037008 + 1;
        }
        else {
          *(uint *)(iVar4 + 0x88) = *(uint *)(iVar4 + 0x88) & 0xffff;
          DAT_ram_80037010 = DAT_ram_80037010 + 1;
        }
        iVar1 = FUN_ram_80021434(param_1,iVar4);
        if (iVar1 == 0) {
          iVar1 = iVar4;
          if (local_28 != 0) {
            *(undefined4 *)(local_24 + 0x8c) = *(undefined4 *)(iVar4 + 0x94);
            iVar1 = local_28;
          }
          local_28 = iVar1;
          *(int *)(param_1 + 0x3a10) = *(int *)(param_1 + 0x3a10) + 1;
          local_24 = iVar4;
        }
        sVar2 = *(short *)(param_2 + 0xe) + -1;
        *(short *)(param_2 + 0xe) = sVar2;
      }
      uVar3 = uVar3 + 1;
      if ((int)(uint)*(ushort *)(param_2 + 2) <= (int)uVar3) {
        uVar3 = 0;
      }
    } while (sVar2 != 0);
    if (local_28 != 0) {
      FUN_ram_001146bc(param_1,local_28,local_24);
    }
  }
  return;
}


