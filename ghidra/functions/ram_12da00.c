/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012da00 */

void FUN_ram_0012da00(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_3;
  if ((uVar1 & 4) == 0) {
    if ((*(uint *)(param_2 + 0x38c) & 0x600) != 0) {
      *(uint *)(param_2 + 0x38c) = *(uint *)(param_2 + 0x38c) & 0xfffff9ff;
      FUN_ram_00158b08(param_1);
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
    return;
  }
  if (*(ushort *)(param_1 + 0x39e4) < 2) {
    return;
  }
  if (DAT_ram_8002c8ec == 0) {
    return;
  }
  if (*(short *)(param_2 + 0x18) == 0) {
    return;
  }
  uVar2 = (uVar1 & 0xf0) >> 4;
  if ((uVar2 == 0) || (0xe < uVar2)) {
    uVar2 = (uint)*(byte *)(param_2 + 0xe);
    if ((uVar2 < DAT_ram_0018c15c) || ((uVar1 & 0xf00) == 0)) {
      uVar1 = uVar2 + 1 & 0xff;
      *(char *)(param_2 + 0xe) = (char)(uVar2 + 1);
      goto LAB_ram_0012daf4;
    }
    if (uVar2 < DAT_ram_0018c15c + DAT_ram_0018c158) goto LAB_ram_0012db80;
  }
  else {
    if ((*(uint *)(param_2 + 0x38c) & 0x600) != 0) {
      *(uint *)(param_2 + 0x38c) = *(uint *)(param_2 + 0x38c) & 0xfffff9ff;
      FUN_ram_00158b08(param_1,param_2);
    }
    uVar1 = 0;
    *(undefined1 *)(param_2 + 0xe) = 0;
LAB_ram_0012daf4:
    if (uVar1 < DAT_ram_0018c158 + DAT_ram_0018c15c) {
      if (uVar1 < DAT_ram_0018c15c) {
        return;
      }
LAB_ram_0012db80:
      uVar1 = *(uint *)(param_2 + 0x38c);
      if ((uVar1 & 0x400) == 0) {
        DAT_ram_80037868 = DAT_ram_80037868 + 1;
        uVar1 = *(uint *)(param_2 + 0x38c);
      }
      *(uint *)(param_2 + 0x38c) = uVar1 | *(uint *)(param_2 + 0xd80);
      goto LAB_ram_0012db60;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x38c);
  if ((uVar1 & 0x200) == 0) {
    DAT_ram_8003786c = DAT_ram_8003786c + 1;
    uVar1 = *(uint *)(param_2 + 0x38c);
    *(int *)(param_2 + 0x14) = DAT_ram_80038ee0 + 1000;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  *(uint *)(param_2 + 0x38c) = uVar1 & 0xfffffbff | 0x200;
LAB_ram_0012db60:
  FUN_ram_00158b08(param_1,param_2);
  return;
}


