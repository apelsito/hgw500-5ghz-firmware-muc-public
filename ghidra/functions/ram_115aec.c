/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115aec */

void FUN_ram_00115aec(int param_1,uint *param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2[1];
  uVar2 = (uVar4 & 0xfffc) >> 8;
  if (((param_1 != 0 && param_4 != 0) && param_3 != 0) && param_5 != 0) {
    uVar3 = (uint)*(byte *)(param_3 + 0x2c);
    uVar5 = uVar4 & 0xc;
    if (((uVar3 == 6) || (*(char *)(param_4 + 0x40e) == '\x03')) && ((*param_2 & 0x7fff0000) != 0))
    {
      if (uVar5 == 0) {
        if ((uVar4 & 0xf0) == 0xe0) {
          return;
        }
      }
      else if (uVar5 == 4) {
        return;
      }
      if (uVar5 == 0) {
        if ((uVar4 & 0xf0) == 0x40) {
          if ((*(byte *)(param_5 + 4) & 1) != 0) {
            return;
          }
          uVar5 = *(uint *)(param_3 + 0x38);
        }
        else {
          uVar3 = *(uint *)(param_3 + 0x38);
          uVar5 = uVar3;
        }
      }
      else {
        uVar5 = *(uint *)(param_3 + 0x38);
      }
      if (param_4 == uVar5) {
        if ((*(ushort *)(param_4 + 0xc) & 0x10) != (uVar2 & 0x10)) {
          FUN_ram_000eee48(&DAT_ram_0018d1dc,s_PSR___TA____pM__RA____pM__node___ram_001c1da0,
                           param_5 + 10,param_5 + 4,param_4 + 0x96,(uint)*(ushort *)(param_4 + 0xc),
                           uVar4 & 0xfc);
          return;
        }
      }
      else {
        uVar5 = uVar2 & 0x10;
        if ((*(ushort *)(param_4 + 0xc) & 0x10) == uVar5) {
          FUN_ram_00115918(param_1,param_2,param_3,param_4,param_5,uVar3,uVar4,uVar2);
          if (*(char *)(param_4 + 0x40e) != '\x03') {
            return;
          }
          uVar1 = *(ushort *)(param_4 + 0xc);
        }
        else {
          FUN_ram_00115790(param_1,param_3,param_4,param_5,uVar5);
          FUN_ram_00159594(param_1,param_4);
          if (*(char *)(param_4 + 0x40e) != '\x03') {
            return;
          }
          uVar1 = *(ushort *)(param_4 + 0xc);
        }
        if ((uVar1 & 0x10) != 0) {
          FUN_ram_00115a08(param_4,param_5,(*param_2 & 0x7fff0000) >> 0x10,uVar5);
          return;
        }
      }
    }
  }
  return;
}


