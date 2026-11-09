/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013eb7c */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_0013eb7c(int *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(*(int *)param_1[1] + 0x1c);
  iVar9 = *param_1;
  if ((DAT_ram_8002c93c != 0) && ((*(ushort *)(param_1 + 3) & 0x4000) != 0)) {
    iVar3 = 8;
    piVar7 = param_1 + 0xfc;
    LP_START = 0x13ebd8;
    LP_END = 0x13ebe4;
    do {
      if ((char)*piVar7 != '\0') {
        bVar2 = false;
        goto LAB_ram_0013ebec;
      }
      piVar7 = (int *)((int)piVar7 + 1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  bVar2 = true;
LAB_ram_0013ebec:
  iVar3 = FUN_ram_001573a4(param_1);
  if (iVar3 != 1) {
    if (iVar3 != 0xff) {
      *(undefined1 *)(param_2 + 0x1e) = 0;
      *(undefined2 *)(param_2 + 0x1c) = 0;
      return;
    }
    *(undefined1 *)(param_2 + 0x1e) = 0x80;
    *(undefined2 *)(param_2 + 0x1c) = 0x2c7e;
    return;
  }
  if ((char)param_1[0x19] == '\0') {
    uVar4 = *(uint *)(param_2 + 0x10);
    uVar5 = (int)param_4 >> 4;
    if ((uint)DAT_ram_001a8890 << 5 <= uVar4) {
      cVar1 = *(char *)(iVar9 + 0x2c);
joined_r0x0013ed50:
      if (cVar1 == '\x01') {
        if (param_3 < 3) {
          if ((param_4 & 0x40) != 0) goto LAB_ram_0013ede8;
          bVar6 = true;
LAB_ram_0013ed70:
          uVar5 = uVar5 & 3;
          if (uVar5 == 0) {
            if (!bVar6) goto LAB_ram_0013edb0;
          }
          else if (3 < uVar5) {
            *(undefined1 *)(param_2 + 0x1e) = 0;
            *(undefined **)(param_2 + 0x1c) = &UNK_auxregs_0ef7;
            if (bVar2) {
              FUN_ram_0013eaac(param_1,param_2);
              return;
            }
            goto LAB_ram_0013efe8;
          }
          if ((param_4 & 0xf) < 10) {
            cVar1 = *(char *)((param_4 & 0xf) + param_3 * 0x28 + uVar5 * 10 + 0x1a8ad0);
            *(char *)(param_2 + 0x1e) = cVar1;
            goto joined_r0x0013eddc;
          }
        }
      }
      else if (param_3 < 3) {
        if ((param_4 & 0x40) == 0) {
          bVar6 = false;
          goto LAB_ram_0013ed70;
        }
LAB_ram_0013ede8:
        if (0x2b < (param_4 & 0xbf)) goto LAB_ram_0013edb0;
        cVar1 = *(char *)(param_3 * 0x2c + (param_4 & 0xbf) + 0x1a8c50);
        *(char *)(param_2 + 0x1e) = cVar1;
joined_r0x0013eddc:
        if (cVar1 == '\0') goto LAB_ram_0013eed0;
        *(undefined2 *)(param_2 + 0x1c) = 0x1ef7;
        goto joined_r0x0013efe0;
      }
LAB_ram_0013edb0:
      *(undefined1 *)(param_2 + 0x1e) = 0;
LAB_ram_0013eed0:
      *(undefined **)(param_2 + 0x1c) = &UNK_auxregs_0ef7;
      goto joined_r0x0013efe0;
    }
    if ((((uint)DAT_ram_001a886a << 5 <= uVar4) && ((param_4 & 0x40) == 0)) && (2 < (uVar5 & 3))) {
      cVar1 = *(char *)(iVar9 + 0x2c);
      goto joined_r0x0013ed50;
    }
    bVar6 = false;
    if (uVar4 < (uint)DAT_ram_001a887e << 5) {
      if ((uint)DAT_ram_001a886a << 5 <= uVar4) {
        if (param_3 < 3) {
          if ((param_4 & 0x40) == 0) {
            uVar5 = uVar5 & 3;
            if (uVar5 == 0) {
              if (*(char *)(iVar9 + 0x2c) != '\x01') goto LAB_ram_0013ef58;
            }
            else if (3 < uVar5) {
              *(undefined1 *)(param_2 + 0x1e) = 0;
              *(undefined2 *)(param_2 + 0x1c) = 0;
              if (bVar2) {
                FUN_ram_0013eaac(param_1,param_2);
                return;
              }
              goto LAB_ram_0013efe8;
            }
            if (9 < (param_4 & 0xf)) goto LAB_ram_0013ef58;
            cVar1 = (&DAT_ram_001a89e0)[(param_4 & 0xf) + uVar5 * 10 + param_3 * 0x28];
            *(char *)(param_2 + 0x1e) = cVar1;
          }
          else {
            if (0x2b < (param_4 & 0xbf)) goto LAB_ram_0013ef58;
            cVar1 = (&DAT_ram_001a8b48)[param_3 * 0x2c + (param_4 & 0xbf)];
            *(char *)(param_2 + 0x1e) = cVar1;
          }
          if (cVar1 != '\0') {
            *(undefined **)(param_2 + 0x1c) = &UNK_auxregs_059c;
            goto joined_r0x0013efe0;
          }
        }
        else {
LAB_ram_0013ef58:
          *(undefined1 *)(param_2 + 0x1e) = 0;
        }
        *(undefined2 *)(param_2 + 0x1c) = 0;
        goto joined_r0x0013efe0;
      }
      if (uVar4 != 0x1e000) {
        *(undefined2 *)(param_2 + 0x1c) = 0;
        *(undefined1 *)(param_2 + 0x1e) = 0;
        goto joined_r0x0013efe0;
      }
      *(undefined1 *)(param_2 + 0x1e) = 4;
      goto LAB_ram_0013eed0;
    }
    if (*(char *)(iVar9 + 0x2c) == '\x01') {
      if (2 < param_3) goto LAB_ram_0013ee70;
      if ((param_4 & 0x40) == 0) {
        bVar6 = true;
        goto LAB_ram_0013ee30;
      }
LAB_ram_0013eea4:
      if (0x2b < (param_4 & 0xbf)) goto LAB_ram_0013ee70;
      cVar1 = *(char *)(param_3 * 0x2c + (param_4 & 0xbf) + 0x1a8bcc);
      *(char *)(param_2 + 0x1e) = cVar1;
      if (cVar1 != '\0') goto LAB_ram_0013eed0;
LAB_ram_0013eee4:
      *(undefined **)(param_2 + 0x1c) = &UNK_auxregs_059c;
      goto joined_r0x0013efe0;
    }
    if (2 < param_3) {
LAB_ram_0013ee70:
      *(undefined1 *)(param_2 + 0x1e) = 0;
      goto LAB_ram_0013eee4;
    }
    if ((param_4 & 0x40) != 0) goto LAB_ram_0013eea4;
LAB_ram_0013ee30:
    uVar5 = uVar5 & 3;
    if (uVar5 == 0) {
      if (bVar6) goto LAB_ram_0013ee7c;
      goto LAB_ram_0013ee70;
    }
    if (uVar5 < 4) {
LAB_ram_0013ee7c:
      if ((param_4 & 0xf) < 10) {
        cVar1 = *(char *)((param_4 & 0xf) + param_3 * 0x28 + uVar5 * 10 + 0x1a8a58);
        *(char *)(param_2 + 0x1e) = cVar1;
        if (cVar1 == '\0') goto LAB_ram_0013eee4;
        goto LAB_ram_0013eed0;
      }
      goto LAB_ram_0013ee70;
    }
    *(undefined1 *)(param_2 + 0x1e) = 0;
    *(undefined **)(param_2 + 0x1c) = &UNK_auxregs_059c;
    if (bVar2) {
      FUN_ram_0013eaac(param_1,param_2);
      return;
    }
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x10) >> 4;
    if (uVar5 < 0x2c7e) {
      if (uVar5 < 0x1ef7) {
        if (uVar5 < 0xef7) {
          *(undefined **)(param_2 + 0x1c) = &UNK_auxregs_059c;
          if (uVar5 < 0x59c) {
            *(undefined1 *)(param_2 + 0x1e) = 0x10;
          }
          else {
            *(undefined1 *)(param_2 + 0x1e) = 0x18;
          }
        }
        else {
          *(undefined **)(param_2 + 0x1c) = &UNK_auxregs_0ef7;
          *(undefined1 *)(param_2 + 0x1e) = 0x20;
        }
      }
      else {
        *(undefined2 *)(param_2 + 0x1c) = 0x1ef7;
        *(undefined1 *)(param_2 + 0x1e) = 0x20;
      }
    }
    else {
      *(undefined2 *)(param_2 + 0x1c) = 0x2c7e;
      *(undefined1 *)(param_2 + 0x1e) = 0x20;
    }
joined_r0x0013efe0:
    if (bVar2) goto LAB_ram_0013f000;
  }
LAB_ram_0013efe8:
  iVar8 = *(int *)(iVar8 + 0x5aac);
  if (iVar8 != 0) {
    *(short *)(param_2 + 0x1c) = (short)iVar8;
    *(undefined1 *)(param_2 + 0x1e) = 0x40;
  }
LAB_ram_0013f000:
  FUN_ram_0013eaac(param_1,param_2);
  return;
}


