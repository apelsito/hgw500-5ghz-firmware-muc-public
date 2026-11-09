/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017ac74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0017ac74(uint *param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*param_1 < 4) {
    uVar1 = (&DAT_ram_0019aa3c)[(short)param_1[8] * 3];
    switch(*param_1) {
    case 0:
      FUN_ram_001710d0(0x2a8,0xf,0,uVar1);
      FUN_ram_001710d0(0x2a8,0x30,4,(&DAT_ram_0019aa3d)[(short)param_1[8] * 3]);
      FUN_ram_001710d0(0x2a8,0xc0,6,(&DAT_ram_0019aa3e)[(short)param_1[8] * 3]);
      iVar2 = FUN_ram_001799f8(0,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,3,(DAT_ram_0018c2e0 * iVar2 + (uint)DAT_ram_0018c360) * 0x10
                       ,0x10,&DAT_ram_0020fe38);
      uVar3 = (uint)DAT_ram_0020fe38;
      FUN_ram_001710d0(700,0x7f,0,uVar3 & 0x7f);
      FUN_ram_001710d0(700,0x3f80,7,(int)uVar3 >> 7 & 0x7f);
      iVar2 = FUN_ram_001799f8(2,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(DAT_ram_0018c2e8 * iVar2 + (uint)DAT_ram_0018c361) * 0x10
                       ,0x10,&DAT_ram_0020fe48);
      _DAT_ram_e609115c = (uint)DAT_ram_0020fe48;
      _DAT_ram_e609114c = (uint)DAT_ram_0020fe4a;
      break;
    case 1:
      FUN_ram_001710d0(0x2a8,0xf000,0xc,uVar1);
      FUN_ram_001710d0(0x2a8,0x30000,0x10,(&DAT_ram_0019aa3d)[(short)param_1[8] * 3]);
      FUN_ram_001710d0(0x2a8,0xc0000,0x12,(&DAT_ram_0019aa3e)[(short)param_1[8] * 3]);
      iVar2 = FUN_ram_001799f8(0,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,3,((uint)DAT_ram_0018c360 + DAT_ram_0018c2e0 * iVar2) * 0x10
                       ,0x10,&DAT_ram_0020fe38);
      uVar3 = (uint)DAT_ram_0020fe3c;
      FUN_ram_001710d0(0x2c0,0x7f,0,uVar3 & 0x7f);
      FUN_ram_001710d0(0x2c0,0x3f80,7,(int)uVar3 >> 7 & 0x7f);
      iVar2 = FUN_ram_001799f8(2,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(DAT_ram_0018c2e8 * iVar2 + (uint)DAT_ram_0018c361) * 0x10
                       ,0x10,&DAT_ram_0020fe48);
      _DAT_ram_e6091160 = (uint)DAT_ram_0020fe4c;
      _DAT_ram_e6091150 = (uint)DAT_ram_0020fe4e;
      break;
    case 2:
      FUN_ram_001710d0(0x2ac,0xf,0,uVar1);
      FUN_ram_001710d0(0x2ac,0x30,4,(&DAT_ram_0019aa3d)[(short)param_1[8] * 3]);
      FUN_ram_001710d0(0x2ac,0xc0,6,(&DAT_ram_0019aa3e)[(short)param_1[8] * 3]);
      iVar2 = FUN_ram_001799f8(0,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,3,(DAT_ram_0018c2e0 * iVar2 + (uint)DAT_ram_0018c360) * 0x10
                       ,0x10,&DAT_ram_0020fe38);
      uVar3 = (uint)DAT_ram_0020fe40;
      FUN_ram_001710d0(0x2c4,0x7f,0,uVar3 & 0x7f);
      FUN_ram_001710d0(0x2c4,0x3f80,7,(int)uVar3 >> 7 & 0x7f);
      iVar2 = FUN_ram_001799f8(2,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,5,((uint)DAT_ram_0018c361 + DAT_ram_0018c2e8 * iVar2) * 0x10
                       ,0x10,&DAT_ram_0020fe48);
      _DAT_ram_e6091164 = (uint)DAT_ram_0020fe50;
      _DAT_ram_e6091154 = (uint)DAT_ram_0020fe52;
      break;
    case 3:
      FUN_ram_001710d0(0x2ac,0xf000,0xc,uVar1);
      FUN_ram_001710d0(0x2ac,0x30000,0x10,(&DAT_ram_0019aa3d)[(short)param_1[8] * 3]);
      FUN_ram_001710d0(0x2ac,0xc0000,0x12,(&DAT_ram_0019aa3e)[(short)param_1[8] * 3]);
      iVar2 = FUN_ram_001799f8(0,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,3,(DAT_ram_0018c2e0 * iVar2 + (uint)DAT_ram_0018c360) * 0x10
                       ,0x10,&DAT_ram_0020fe38);
      uVar3 = (uint)DAT_ram_0020fe44;
      FUN_ram_001710d0(0x2c8,0x7f,0,uVar3 & 0x7f);
      FUN_ram_001710d0(0x2c8,0x3f80,7,(int)uVar3 >> 7 & 0x7f);
      iVar2 = FUN_ram_001799f8(2,(&DAT_ram_0019aa3c)[(short)param_1[8] * 3]);
      FUN_ram_000f4d18(DAT_ram_0018c2c8,5,(DAT_ram_0018c2e8 * iVar2 + (uint)DAT_ram_0018c361) * 0x10
                       ,0x10,&DAT_ram_0020fe48);
      _DAT_ram_e6091168 = (uint)DAT_ram_0020fe54;
      _DAT_ram_e6091158 = (uint)DAT_ram_0020fe56;
    }
  }
  return;
}


