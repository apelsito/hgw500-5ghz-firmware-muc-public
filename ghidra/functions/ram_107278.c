/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00107278 */

undefined4 FUN_ram_00107278(int *param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  iVar10 = *param_1;
  if ((((int)param_1 + 0x1fU & 1) == 0) && ((iVar10 + 0x24U & 1) == 0)) {
    *(undefined2 *)((int)param_1 + 0x1f) = *(undefined2 *)(iVar10 + 0x24);
    uVar1 = *(undefined2 *)(iVar10 + 0x26);
    *(char *)((int)param_1 + 0x21) = (char)uVar1;
    *(char *)((int)param_1 + 0x22) = (char)((ushort)uVar1 >> 8);
    uVar1 = *(undefined2 *)(iVar10 + 0x28);
    *(char *)((int)param_1 + 0x23) = (char)uVar1;
    *(char *)(param_1 + 9) = (char)((ushort)uVar1 >> 8);
  }
  else {
    FUN_ram_0039fe00((int)param_1 + 0x1fU,iVar10 + 0x24U,6);
  }
  if (param_2 < 0x101) {
    param_1[0x11e] = param_2;
    if (0 < param_2) goto LAB_ram_00107320;
  }
  else {
    param_2 = 0x100;
    param_1[0x11e] = 0x100;
LAB_ram_00107320:
    iVar12 = 0;
    do {
      iVar11 = iVar12 + 1;
      FUN_ram_000efab8(param_1 + iVar12 * 0xd + 0x11f,iVar12 * 0x34 + param_3,0x34);
      iVar12 = iVar11;
    } while (iVar11 < param_2);
  }
  uVar3 = *(ushort *)((int)param_1 + 0x436) | 1;
  *(short *)((int)param_1 + 0x436) = (short)uVar3;
  if (0 < param_2) {
    iVar12 = 0;
    do {
      uVar3 = param_1[iVar12 * 0xd + 0x120];
      if (uVar3 == 0) {
        FUN_ram_000ee260(s_channel_with_no_flags_ram_001c0004);
        FUN_ram_000ee260(0x1c0000);
        if ((char)param_1[iVar12 * 0xd + 0x121] != -1) {
          uVar3 = param_1[iVar12 * 0xd + 0x120];
          param_2 = param_1[0x11e];
          goto LAB_ram_00107434;
        }
LAB_ram_001073c0:
        FUN_ram_000ee260(s_channel_with_bogus_ieee_number___ram_001c001c);
        FUN_ram_000ee260(0x1c0000);
        uVar3 = param_1[iVar12 * 0xd + 0x120];
        param_2 = param_1[0x11e];
        uVar4 = uVar3 & 0xa0;
        uVar2 = uVar3 & 0xc0;
        uVar9 = uVar3 & 0x100c0;
        uVar8 = uVar3 & 0x10140;
        if ((uVar3 & 0x140) != 0x140) goto LAB_ram_00107464;
LAB_ram_00107474:
        uVar6 = *(ushort *)((int)param_1 + 0x436) | 2;
        *(ushort *)((int)param_1 + 0x436) = uVar6;
        if (uVar4 == 0xa0) goto LAB_ram_0010749c;
LAB_ram_00107488:
        if (uVar2 == 0xc0) {
          uVar6 = *(ushort *)((int)param_1 + 0x436);
          goto LAB_ram_001074b8;
        }
        if (uVar9 != 0x100c0) goto LAB_ram_001074cc;
        uVar6 = *(ushort *)((int)param_1 + 0x436);
LAB_ram_001074e8:
        *(ushort *)((int)param_1 + 0x436) = uVar6 | 0x100;
        if (uVar8 == 0x10140) {
          *(ushort *)((int)param_1 + 0x436) = uVar6 | 0x180;
        }
      }
      else {
        if ((char)param_1[iVar12 * 0xd + 0x121] == -1) goto LAB_ram_001073c0;
LAB_ram_00107434:
        uVar4 = uVar3 & 0xa0;
        uVar2 = uVar3 & 0xc0;
        uVar9 = uVar3 & 0x100c0;
        uVar8 = uVar3 & 0x10140;
        if ((uVar3 & 0x140) == 0x140) goto LAB_ram_00107474;
LAB_ram_00107464:
        if (uVar4 != 0xa0) goto LAB_ram_00107488;
        uVar6 = *(ushort *)((int)param_1 + 0x436);
LAB_ram_0010749c:
        uVar6 = uVar6 | 4;
        *(ushort *)((int)param_1 + 0x436) = uVar6;
        if (uVar2 == 0xc0) {
LAB_ram_001074b8:
          uVar6 = uVar6 | 8;
          *(ushort *)((int)param_1 + 0x436) = uVar6;
        }
        if (uVar9 == 0x100c0) goto LAB_ram_001074e8;
LAB_ram_001074cc:
        if (uVar8 == 0x10140) {
          *(ushort *)((int)param_1 + 0x436) = *(ushort *)((int)param_1 + 0x436) | 0x80;
        }
      }
      if ((uVar9 == 0x100c0) && (((uVar3 & 0x20000) != 0 || ((uVar3 & 0x40000) != 0)))) {
        *(ushort *)((int)param_1 + 0x436) = *(ushort *)((int)param_1 + 0x436) | 0x200;
      }
      if ((uVar8 == 0x10140) && ((uVar3 & 0x20000) != 0 || (uVar3 & 0x40000) != 0)) {
        *(ushort *)((int)param_1 + 0x436) = *(ushort *)((int)param_1 + 0x436) | 0x400;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < param_2);
    uVar3 = (uint)*(ushort *)((int)param_1 + 0x436);
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x10e);
  if ((uVar3 & 1 << (uVar2 & 0x1f)) == 0) {
    *(undefined2 *)(param_1 + 0x10e) = 0;
    if ((uVar3 & 8) == 0) {
      if ((uVar3 & 0x100) == 0) {
        uVar2 = 0;
        goto LAB_ram_001075ac;
      }
      goto LAB_ram_001075ec;
    }
LAB_ram_00107584:
    FUN_ram_00107110((int)param_1 + 0x95,3);
    if ((*(ushort *)((int)param_1 + 0x436) & 0x100) != 0) goto LAB_ram_001075ec;
  }
  else {
    if ((uVar3 & 8) != 0) goto LAB_ram_00107584;
    if ((uVar3 & 0x100) == 0) goto LAB_ram_001075ac;
LAB_ram_001075ec:
    FUN_ram_00107110((int)param_1 + 0x135,8);
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x10e);
LAB_ram_001075ac:
  param_1[0xe1f] = (int)(param_1 + 0x11f);
  param_1[10] = param_1[10] | 0x2000;
  FUN_ram_00106f00(param_1,uVar2 & 0xff);
  sVar7 = *(short *)((int)param_1 + 0x43a);
  if (sVar7 == 0) {
    *(undefined2 *)((int)param_1 + 0x43a) = 100;
    sVar7 = 100;
  }
  if (param_1[0x112] == 0) {
    param_1[0x112] = 500;
  }
  *(short *)(param_1 + 0x10f) = sVar7 * 10;
  FUN_ram_000e7d40(param_1 + 1,1);
  FUN_ram_000e7d40(param_1 + 3,1);
  param_1[5] = 0;
  param_1[6] = (int)(param_1 + 5);
  *(undefined2 *)((int)param_1 + 0x43e) = 100;
  FUN_ram_001071b4(param_1,param_1 + 0xe20,s_station_ram_001c0040,2);
  *(undefined1 **)(iVar10 + 0x7c) = &LAB_ram_001119c8;
  iVar10 = FUN_ram_000e6c28(4);
  uVar5 = 0xd;
  if (iVar10 == 0) {
    uVar5 = 10;
  }
  FUN_ram_00107214(param_1,uVar5);
  return 0;
}


