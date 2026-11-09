/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f8be8 */

void FUN_ram_000f8be8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_2 & 0x10000000) != 0) {
    uVar1 = param_2 & 4;
    iVar3 = *(int *)(param_1 + 0xc);
    if ((param_2 & 1) == 0) {
      if ((param_2 & 2) == 0) {
        uVar4 = 0;
        if (uVar1 != 0) {
          uVar4 = 0xf00;
        }
      }
      else if (uVar1 == 0) {
        uVar4 = 0xf0;
      }
      else {
        uVar4 = 0xff0;
      }
      uVar1 = 0xf;
    }
    else {
      uVar4 = 0xf;
      if ((param_2 & 2) == 0) {
        if (uVar1 != 0) {
          uVar4 = 0xf0f;
        }
      }
      else {
        uVar4 = 0xff;
        if (uVar1 != 0) {
          uVar4 = 0xfff;
        }
      }
      uVar1 = 0;
    }
    if ((param_2 & 8) == 0) {
      uVar2 = uVar4;
      if ((param_2 & 0x10) != 0) {
        uVar2 = uVar4 | 0xf0000;
      }
joined_r0x000f8c98:
      if ((param_2 & 0x20) != 0) goto LAB_ram_000f8c9c;
LAB_ram_000f8cc0:
      uVar4 = uVar2;
      if ((param_2 & 0x40) != 0) {
        uVar4 = uVar2 | 0xf000000;
      }
    }
    else {
      uVar2 = uVar4 | 0xf000;
      if ((param_2 & 0x10) != 0) {
        uVar2 = uVar4 | 0xff000;
        goto joined_r0x000f8c98;
      }
      if ((param_2 & 0x20) == 0) goto LAB_ram_000f8cc0;
LAB_ram_000f8c9c:
      uVar4 = uVar2 | 0xf00000;
      if ((param_2 & 0x40) != 0) {
        uVar4 = uVar2 | 0xff00000;
      }
    }
    if (uVar1 != 0) {
      uVar1 = *(uint *)(iVar3 + 0x540) & ~uVar1;
      if (*(uint *)(iVar3 + 0x540) != uVar1) {
        *(uint *)(param_1 + 0xd8) = uVar1;
        *(uint *)(iVar3 + 0x540) = uVar1;
        iVar3 = *(int *)(param_1 + 0xc);
      }
    }
    uVar4 = uVar4 | *(uint *)(iVar3 + 0x540);
    if (*(uint *)(iVar3 + 0x540) != uVar4) {
      *(uint *)(param_1 + 0xd8) = uVar4;
      *(uint *)(iVar3 + 0x540) = uVar4;
    }
  }
  if ((param_2 & 0x20000000) != 0) {
    if ((param_2 & 0x80) == 0) {
      uVar1 = 0;
      if ((param_2 & 0x100) != 0) {
        uVar1 = 0xf0;
      }
    }
    else if ((param_2 & 0x100) == 0) {
      uVar1 = 0xf;
    }
    else {
      uVar1 = 0xff;
    }
    uVar4 = *(uint *)(*(int *)(param_1 + 0xc) + 0x548);
    uVar1 = uVar1 | uVar4;
    if (uVar4 != uVar1) {
      *(uint *)(param_1 + 0xdc) = uVar1;
      *(uint *)(*(int *)(param_1 + 0xc) + 0x548) = uVar1;
    }
  }
  if ((param_2 & 0x40000000) != 0) {
    uVar1 = param_2 & 0x800;
    if ((param_2 & 0x200) == 0) {
      if ((param_2 & 0x400) == 0) {
        if (uVar1 == 0) {
          uVar4 = 0;
          goto LAB_ram_000f8e04;
        }
        uVar1 = 0;
      }
      else {
        if (uVar1 == 0) {
          uVar4 = 2;
          goto LAB_ram_000f8e04;
        }
        uVar1 = 2;
      }
LAB_ram_000f8e14:
      uVar4 = uVar1 | 4;
      if ((param_2 & 0x1000) != 0) {
        uVar4 = uVar1 | 0xc;
      }
    }
    else {
      if ((param_2 & 0x400) != 0) {
        if (uVar1 == 0) {
          uVar4 = 3;
          goto LAB_ram_000f8e04;
        }
        uVar1 = 3;
        goto LAB_ram_000f8e14;
      }
      if (uVar1 != 0) {
        uVar1 = 1;
        goto LAB_ram_000f8e14;
      }
      uVar4 = 1;
LAB_ram_000f8e04:
      if ((param_2 & 0x1000) != 0) {
        uVar4 = uVar4 | 8;
      }
    }
    if ((param_2 & 0x2000) == 0) {
      uVar1 = uVar4;
      if ((param_2 & 0x4000) != 0) {
        uVar1 = uVar4 | 0x4000;
      }
joined_r0x000f8e40:
      if ((param_2 & 0x8000) != 0) goto LAB_ram_000f8e44;
LAB_ram_000f8e64:
      uVar4 = uVar1;
      if ((param_2 & 0x10000) != 0) {
        uVar4 = uVar1 | 0x40;
      }
    }
    else {
      uVar1 = uVar4 | 0x10;
      if ((param_2 & 0x4000) != 0) {
        uVar1 = uVar4 | 0x4010;
        goto joined_r0x000f8e40;
      }
      if ((param_2 & 0x8000) == 0) goto LAB_ram_000f8e64;
LAB_ram_000f8e44:
      uVar4 = uVar1 | 0x2000;
      if ((param_2 & 0x10000) != 0) {
        uVar4 = uVar1 | 0x2040;
      }
    }
    if ((param_2 & 0x20000) != 0) {
      uVar4 = uVar4 | 0x80;
    }
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2030);
    uVar4 = uVar4 | uVar1;
    if (uVar4 != uVar1) {
      *(uint *)(param_1 + 0xe0) = uVar4;
      *(uint *)(*(int *)(param_1 + 0xc) + 0x2030) = uVar4;
    }
  }
  if ((param_2 & 0x80000000) == 0) {
    return;
  }
  uVar1 = param_2 & 0x100000;
  if ((param_2 & 0x40000) == 0) {
    if ((param_2 & 0x80000) == 0) {
      if (uVar1 != 0) {
        uVar1 = 0;
        goto LAB_ram_000f8f28;
      }
      uVar4 = 0;
    }
    else {
      if (uVar1 != 0) {
        uVar1 = 2;
        goto LAB_ram_000f8f28;
      }
      uVar4 = 2;
    }
  }
  else if ((param_2 & 0x80000) == 0) {
    if (uVar1 != 0) {
      uVar1 = 1;
LAB_ram_000f8f28:
      uVar4 = uVar1 | 4;
      if ((param_2 & 0x200000) != 0) {
        uVar4 = uVar1 | 0xc;
      }
      goto LAB_ram_000f8f34;
    }
    uVar4 = 1;
  }
  else {
    if (uVar1 != 0) {
      uVar1 = 3;
      goto LAB_ram_000f8f28;
    }
    uVar4 = 3;
  }
  if ((param_2 & 0x200000) != 0) {
    uVar4 = uVar4 | 8;
  }
LAB_ram_000f8f34:
  if ((param_2 & 0x400000) != 0) {
    uVar4 = uVar4 | 0x10;
  }
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2038);
  uVar4 = uVar4 | uVar1;
  if (uVar1 != uVar4) {
    *(uint *)(param_1 + 0xe4) = uVar4;
    *(uint *)(*(int *)(param_1 + 0xc) + 0x2038) = uVar4;
    return;
  }
  return;
}


