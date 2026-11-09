/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016e9a4 */

void FUN_ram_0016e9a4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  wchar_t wVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_1 == 0) {
    iVar4 = param_2;
    if (0x17 < param_2) goto LAB_ram_0016ea04;
joined_r0x0016e9fc:
    if (-1 < iVar4) goto LAB_ram_0016ea24;
  }
  else {
    iVar4 = 0;
    iVar2 = 0x74;
    LP_START = 0x16e9e8;
    LP_END = 0x16e9f8;
    do {
      if (param_2 != (&DAT_ram_00194be4)[iVar4]) {
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar4 != 0x74) goto joined_r0x0016e9fc;
LAB_ram_0016ea04:
    iVar4 = -1;
  }
  FUN_ram_000ee260(s_Channel_index_has_reached_maximu_ram_001c9384);
  FUN_ram_000ee260(&DAT_ram_001c93ac);
LAB_ram_0016ea24:
  iVar2 = param_1 * 0x1e0 + iVar4 * 4;
  uVar7 = *(undefined4 *)(&DAT_ram_00194dc4 + iVar2);
  uVar6 = *(undefined4 *)(&DAT_ram_00195184 + iVar2);
  wVar5 = u__________________________________ram_00195364[iVar4 + param_1 * 0x78 + 0x78];
  if ((param_2 < 0x29) || (0xb5 < param_2)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 3;
  }
  FUN_ram_001710d0(0x280,0x70,4,uVar3);
  FUN_ram_00170278(param_2);
  FUN_ram_001710d0(0x27c,0xffff,0,uVar7);
  FUN_ram_001710d0(0x278,0xff000,0xc,uVar6);
  FUN_ram_001710d0(0x274,0xffffff,0,wVar5);
  FUN_ram_001710d0(0x2a0,0xc,2,2);
  DAT_ram_0018c1cd = 2;
  FUN_ram_001710d0(0x280,0x200,9,0);
  FUN_ram_001710d0(0x280,0x100,8,0);
  FUN_ram_001710d0(0x280,0x80,7,1);
  FUN_ram_001710d0(0x280,0x200,9,1);
  FUN_ram_000e4fa0(100);
  uVar6 = FUN_ram_001711e0(4,0xff,0);
  FUN_ram_001710d0(0x27c,0xff0000,0x10,uVar6);
  FUN_ram_0016e5f8();
  FUN_ram_0016e8d8(param_1,param_2,0);
  uVar1 = FUN_ram_00183ef4();
  if (0x3f < uVar1) {
    uVar1 = 0x3f;
  }
  FUN_ram_00188864(*(undefined2 *)(&DAT_ram_002205e8 + uVar1));
  if (DAT_ram_0018c36c == '\0') {
    FUN_ram_00181458();
    DAT_ram_0018c36c = DAT_ram_0018c36c + '\x01';
  }
  return;
}


