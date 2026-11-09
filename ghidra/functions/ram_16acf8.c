/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016acf8 */

void FUN_ram_0016acf8(uint param_1,undefined2 *param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined2 local_10;
  
  local_10 = (undefined2)param_3;
  *param_2 = local_10;
  uVar2 = 4;
  for (param_3 = param_3 >> 0x10; param_3 != 0; param_3 = param_3 - 1) {
    pbVar5 = (byte *)(uVar2 + (int)param_2);
    if (param_1 == *param_4) {
      *pbVar5 = param_4[1];
      if ((param_4[2] < 9) || (0x11 < param_4[2])) {
        FUN_ram_0039fe00(pbVar5 + 1,*(undefined4 *)(param_4 + 8),param_4[3]);
        uVar3 = (uint)param_4[3];
      }
      else {
        bVar1 = **(byte **)(param_4 + 4);
        uVar4 = *(undefined4 *)(param_4 + 8);
        pbVar5[1] = bVar1;
        FUN_ram_0039fe00(pbVar5 + 2,uVar4,(uint)param_4[3] * (uint)bVar1);
        uVar3 = (uint)param_4[3] * (uint)pbVar5[1] + 1;
      }
      uVar2 = uVar3 + (uVar2 + 1 & 0xffff) & 0xffff;
    }
    param_4 = param_4 + 0xc;
  }
  param_2[1] = (short)uVar2;
  return;
}


