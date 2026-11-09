/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001377e4 */

void FUN_ram_001377e4(undefined4 param_1,int param_2,uint param_3,uint param_4,uint param_5,
                     int param_6,int param_7,int param_8,int param_9)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if ((DAT_ram_0018c1d8 & 1) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_8 == 0) {
    if (param_7 == 0) goto LAB_ram_00137834;
    if ((param_4 & 2) == 0) {
      uVar1 = *(ushort *)(param_2 + 0xc);
      goto joined_r0x001378ec;
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x388);
    if (iVar5 == 0) {
      if (param_7 == 0) goto LAB_ram_00137834;
      if ((param_4 & 2) == 0) {
        uVar1 = *(ushort *)(param_2 + 0xc);
        goto joined_r0x001378ec;
      }
    }
    else {
      *(int *)(param_9 * 0x48 + iVar5 + 0x2c) = *(int *)(iVar5 + param_9 * 0x48 + 0x2c) + 1;
      if (param_7 == 0) {
LAB_ram_00137834:
        param_2 = param_9 * 0x14 + param_2;
        *(int *)(param_2 + 0x364) = *(int *)(param_2 + 0x364) + 1;
        return;
      }
      if ((param_4 & 2) == 0) {
        uVar1 = *(ushort *)(param_2 + 0xc);
joined_r0x001378ec:
        if ((uVar1 & 8) == 0) {
          if (0xb < param_3) {
            param_3 = 0xb;
          }
          uVar1 = *(ushort *)(&DAT_ram_001a9244 + param_3 * 2);
          iVar5 = param_2 + param_9 * 0x14;
          *(uint *)(iVar5 + 0x360) = (param_5 & 3) << 10 | param_3 | (uint)uVar1 << 0x10;
          *(uint *)(iVar5 + 0x370) = *(int *)(param_2 + param_9 * 0x14 + 0x370) + (uint)uVar1;
        }
        else {
          if (0x4c < param_3) {
            param_3 = 0x4c;
          }
          uVar1 = (&DAT_ram_001a925c)[param_3 + param_5 * 0x9a + param_6 * 0x4d];
          iVar5 = param_2 + param_9 * 0x14;
          *(uint *)(iVar5 + 0x360) = (param_5 & 3) << 10 | param_3 | (uint)uVar1 << 0x10 | 0x80;
          *(uint *)(iVar5 + 0x370) = *(int *)(param_2 + param_9 * 0x14 + 0x370) + (uint)uVar1;
        }
        goto LAB_ram_00137a2c;
      }
    }
  }
  uVar2 = (param_5 & 3) << 10;
  iVar5 = param_9 * 0x14 + param_2;
  if ((param_3 & 0x40) == 0) {
    iVar3 = ((param_3 & 0xf0) >> 4) + 1;
    uVar4 = (uint)*(ushort *)
                   (param_5 * 0x140 + param_6 * 0xa0 + iVar3 * 0x14 + (param_3 & 0xf) * 2 + 0x1a9718
                   );
    *(uint *)(iVar5 + 0x360) =
         uVar4 << 0x10 | param_3 & 0xf | iVar3 * 0x1000 & 0xf000U | uVar2 | 0x100;
    *(uint *)(iVar5 + 0x370) = uVar4 + *(int *)(iVar5 + 0x370);
  }
  else {
    param_3 = param_3 & 0xffffffbf;
    uVar4 = (uint)*(ushort *)
                   ((int)&PTR_DAT_ram_00340027_ram_001a9eac +
                   param_5 * 0xb0 + param_6 * 0x58 + param_3 * 2);
    *(uint *)(iVar5 + 0x360) =
         uVar2 | uVar4 << 0x10 | param_3 + 0x21 | ((byte)(&DAT_ram_001a870c)[param_3] & 0xf) << 0xc
         | 0x100;
    *(uint *)(iVar5 + 0x370) = *(int *)(iVar5 + 0x370) + uVar4;
  }
LAB_ram_00137a2c:
  *(int *)(iVar5 + 0x36c) = *(int *)(iVar5 + 0x36c) + 1;
  *(int *)(iVar5 + 0x364) = *(int *)(iVar5 + 0x364) + 1;
  return;
}


