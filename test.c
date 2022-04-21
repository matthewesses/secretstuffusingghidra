
/* test(char const*) */

undefined4 test(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  EXPRESSION_UNIT *__ptr;
  EXPRESSION_UNIT *__ptr_00;
  long **__ptr_01;
  long **__ptr_02;
  NODE **__ptr_03;
  long *plVar7;
  NODE *pNVar8;
  int iVar9;
  int iVar10;
  long **pplVar11;
  size_t __nmemb;
  NODE **ppNVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long **pplVar16;
  long lVar17;
  NODE **ppNVar18;
  int iVar19;
  bool bVar20;
  undefined4 local_88;
  int local_80;
  int local_7c;
  int *local_70;
  int local_64;
  int local_50;
  int local_48 [6];
  
  read_modules(param_1);
  golden_read_modules(param_1);
  plVar6 = (long *)golden_init_slicing_tree((NODE *)0x0,0);
  lVar14 = (long)golden_num_modules;
  iVar4 = golden_num_modules * 2;
  iVar9 = iVar4 + -1;
  __nmemb = (size_t)iVar9;
  __ptr = (EXPRESSION_UNIT *)calloc(__nmemb,0x10);
  __ptr_00 = (EXPRESSION_UNIT *)calloc(__nmemb,0x10);
  iVar13 = 0;
  __ptr_01 = (long **)malloc(__nmemb * 8);
  __ptr_02 = (long **)malloc(lVar14 * 8);
  iVar19 = 0;
  __ptr_03 = (NODE **)malloc(lVar14 * 8 - 8);
  *__ptr_01 = plVar6;
  iVar3 = 1;
  iVar10 = 0;
  pplVar16 = __ptr_01;
  do {
    while( true ) {
      plVar7 = *pplVar16;
      iVar10 = iVar10 + 1;
      if (*plVar7 != 0) break;
      if (*(int *)(plVar7 + 1) == 2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("u->cutline != UNDEFINED_CUTLINE","test.c",0x111,"int test(const char*)");
      }
      plVar15 = (long *)plVar7[3];
      lVar14 = (long)iVar13;
      iVar13 = iVar13 + 1;
      __ptr_03[lVar14] = (NODE *)plVar7;
      if (plVar15 != (long *)0x0) goto LAB_00101a35;
LAB_00101a88:
      plVar7 = (long *)plVar7[4];
      iVar1 = iVar3;
      if (plVar7 != (long *)0x0) goto LAB_00101a48;
LAB_00101a98:
      pplVar16 = pplVar16 + 1;
      if (iVar10 == iVar3) goto LAB_00101aa2;
    }
    if (*(int *)(plVar7 + 1) != 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("u->cutline == UNDEFINED_CUTLINE","test.c",0x10d,"int test(const char*)");
    }
    plVar15 = (long *)plVar7[3];
    lVar14 = (long)iVar19;
    iVar19 = iVar19 + 1;
    __ptr_02[lVar14] = plVar7;
    if (plVar15 == (long *)0x0) goto LAB_00101a88;
LAB_00101a35:
    plVar7 = (long *)plVar7[4];
    iVar1 = iVar3 + 1;
    __ptr_01[iVar3] = plVar15;
    iVar3 = iVar1;
    if (plVar7 == (long *)0x0) goto LAB_00101a98;
LAB_00101a48:
    iVar3 = iVar1 + 1;
    pplVar16 = pplVar16 + 1;
    __ptr_01[iVar1] = plVar7;
  } while (iVar10 != iVar3);
LAB_00101aa2:
  puts("\n****************************** VERIFICATION ******************************");
  __printf_chk(1,"Circuit: %d golden_modules, slicing tree size = %d leaves and %d internals\n",
               golden_num_modules,iVar19,iVar13);
  pNVar8 = (NODE *)init_slicing_tree((NODE *)0x0,0);
  if (iVar9 < 1) {
    local_48[0] = 0;
    golden_postfix_traversal(pNVar8,local_48,__ptr);
    local_48[0] = 0;
    golden_postfix_traversal((NODE *)plVar6,local_48,__ptr_00);
    packing(__ptr,iVar9);
LAB_00102259:
    iVar10 = 0x28;
    puts("(1) Function  \'init_slicing_tree\' : correct!   +25");
    local_50 = 0x32;
    local_64 = 0x2d;
    local_7c = 0x23;
    iVar3 = 0x1e;
    local_80 = 0x19;
    local_88 = 1;
  }
  else {
    lVar14 = 0;
    lVar17 = ((ulong)(iVar4 - 2) + 1) * 0x10;
    do {
      *(undefined8 *)(__ptr + lVar14) = 0;
      *(undefined4 *)(__ptr + lVar14 + 8) = 2;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != lVar17);
    local_48[0] = 0;
    golden_postfix_traversal(pNVar8,local_48,__ptr);
    lVar14 = 0;
    do {
      *(undefined8 *)(__ptr_00 + lVar14) = 0;
      *(undefined4 *)(__ptr_00 + lVar14 + 8) = 2;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != lVar17);
    local_48[0] = 0;
    golden_postfix_traversal((NODE *)plVar6,local_48,__ptr_00);
    packing(__ptr,iVar9);
    lVar14 = 0;
    bVar20 = true;
    do {
      if (*(int *)(__ptr + lVar14 + 8) != *(int *)(__ptr_00 + lVar14 + 8)) {
        bVar20 = false;
      }
      if (*(int **)(__ptr + lVar14) != (int *)0x0) {
        if (*(int **)(__ptr_00 + lVar14) == (int *)0x0) {
          bVar20 = false;
        }
        if (**(int **)(__ptr + lVar14) != **(int **)(__ptr_00 + lVar14)) {
          bVar20 = false;
        }
      }
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != lVar17);
    if (bVar20) goto LAB_00102259;
    iVar10 = 0xf;
    puts("(1) Function  \'init_slicing_tree\' : incorrect! +0");
    __printf_chk(1);
    pnt_expression(__ptr_00,iVar9);
    __printf_chk(1);
    pnt_expression(__ptr,iVar9);
    local_50 = 0x19;
    local_64 = 0x14;
    local_7c = 10;
    iVar3 = 5;
    local_80 = 0;
    local_88 = 0;
  }
  local_70 = local_48;
  iVar1 = 0;
  pplVar16 = __ptr_02;
  if (0 < iVar19) {
    do {
      iVar2 = is_leaf_node((NODE *)*pplVar16);
      iVar1 = iVar1 + 1;
      pplVar16 = pplVar16 + 1;
      if (iVar2 == 0) {
        puts("(2) Function  \'is_leaf\'           : incorrect! +0");
        local_88 = 0;
        iVar1 = iVar10;
        iVar10 = local_7c;
        goto LAB_00101ca5;
      }
    } while (iVar1 < iVar19);
  }
  puts("(2) Function  \'is_leaf\'           : correct!   +5");
  iVar1 = local_64;
  local_80 = iVar3;
  local_64 = local_50;
  iVar3 = local_7c;
LAB_00101ca5:
  local_7c = iVar10;
  iVar10 = 0;
  ppNVar18 = __ptr_03;
  if (0 < iVar13) {
    do {
      iVar2 = is_internal_node(*ppNVar18);
      iVar10 = iVar10 + 1;
      ppNVar18 = ppNVar18 + 1;
      if (iVar2 == 0) {
        puts("(3) Function  \'is_internal\'       : incorrect! +0");
        local_88 = 0;
        iVar10 = local_7c;
        local_7c = iVar3;
        local_64 = iVar1;
        iVar3 = local_80;
        goto LAB_00101d0f;
      }
    } while (iVar10 < iVar13);
  }
  puts("(3) Function  \'is_internal\'       : correct!   +5");
  iVar10 = iVar1;
  if (0 < iVar13) {
LAB_00101d0f:
    iVar1 = 0;
    ppNVar18 = __ptr_03;
    do {
      iVar2 = is_in_subtree((NODE *)plVar6,*ppNVar18);
      bVar20 = iVar2 != 0;
      iVar1 = iVar1 + 1;
      ppNVar18 = ppNVar18 + 1;
      if (!bVar20) break;
    } while (iVar1 < iVar13);
    local_80 = iVar10;
    if (bVar20) goto LAB_00101d58;
  }
  else {
    bVar20 = true;
    local_80 = iVar1;
LAB_00101d58:
    if (0 < iVar19) {
      iVar10 = 0;
      pplVar16 = __ptr_02;
      do {
        iVar1 = is_in_subtree((NODE *)plVar6,(NODE *)*pplVar16);
        bVar20 = iVar1 != 0;
        iVar10 = iVar10 + 1;
        pplVar16 = pplVar16 + 1;
        if (!bVar20) break;
      } while (iVar10 < iVar19);
    }
  }
  iVar10 = 0;
  pplVar16 = __ptr_02;
  if (bVar20) {
    do {
      if (iVar19 <= iVar10) break;
      iVar10 = iVar10 + 1;
      if (iVar10 < iVar19) {
        plVar7 = *pplVar16;
        pplVar11 = pplVar16 + 1;
        iVar1 = iVar10;
        do {
          iVar2 = is_in_subtree((NODE *)plVar7,(NODE *)*pplVar11);
          bVar20 = iVar2 == 0;
          iVar1 = iVar1 + 1;
          pplVar11 = pplVar11 + 1;
          if (!bVar20) break;
        } while (iVar1 < iVar19);
      }
      else {
        bVar20 = true;
      }
      pplVar16 = pplVar16 + 1;
    } while (bVar20);
  }
  iVar10 = 0;
  ppNVar18 = __ptr_03;
  if (bVar20) {
    do {
      if (iVar13 <= iVar10) break;
      iVar10 = iVar10 + 1;
      if (iVar10 < iVar13) {
        pNVar8 = *ppNVar18;
        ppNVar12 = ppNVar18 + 1;
        iVar19 = iVar10;
        do {
          iVar1 = is_in_subtree(pNVar8,*ppNVar12);
          bVar20 = iVar1 != 0;
          iVar19 = iVar19 + 1;
          ppNVar12 = ppNVar12 + 1;
          if (!bVar20) break;
        } while (iVar19 < iVar13);
      }
      else {
        bVar20 = true;
      }
      ppNVar18 = ppNVar18 + 1;
    } while (bVar20);
  }
  if (bVar20) {
    puts("(4) Function  \'is_in_subtree\'     : correct!   +10");
    local_7c = local_64;
  }
  else {
    puts("(4) Function  \'is_in_subtree\'     : incorrect! +0");
    local_88 = 0;
    local_80 = iVar3;
  }
  bVar20 = false;
  plVar7 = *__ptr_02;
  iVar3 = *(int *)(*plVar7 + 0x10);
  iVar10 = *(int *)(*plVar7 + 0xc);
  rotate((NODE *)plVar7);
  if (*(int *)(*plVar7 + 0xc) == iVar3) {
    bVar20 = iVar10 == *(int *)(*plVar7 + 0x10);
  }
  rotate((NODE *)plVar7);
  if (((*(int *)(*plVar7 + 0xc) == iVar10) && (*(int *)(*plVar7 + 0x10) == iVar3)) && (bVar20)) {
    puts("(5) Procedure \'rotate\'            : correct!   +5");
    local_80 = local_7c;
  }
  else {
    puts("(5) Procedure \'rotate\'            : incorrect! +0");
    local_88 = 0;
  }
  pNVar8 = *__ptr_03;
  iVar3 = *(int *)(pNVar8 + 8);
  recut(pNVar8);
  iVar10 = *(int *)(pNVar8 + 8);
  recut(pNVar8);
  if ((*(int *)(pNVar8 + 8) == iVar3) && (iVar10 != *(int *)(pNVar8 + 8))) {
    puts("(6) Procedure \'recut\'             : correct!   +5");
    local_80 = local_80 + 5;
  }
  else {
    puts("(6) Procedure \'recut\'             : incorrect! +0");
    local_88 = 0;
  }
  lVar14 = *plVar7;
  plVar15 = __ptr_02[1];
  lVar17 = *plVar15;
  swap_module((NODE *)plVar7,(NODE *)plVar15);
  bVar20 = false;
  if (*plVar15 == lVar14) {
    bVar20 = lVar17 == *plVar7;
    swap_module((NODE *)plVar7,(NODE *)plVar15);
    if (*plVar7 == lVar14) goto LAB_001023fa;
LAB_00101f68:
    puts("(7) Procedure \'swap_module\'       : incorrect! +0");
    local_88 = 0;
    if (1 < iVar13) goto LAB_00101f83;
LAB_00102427:
    puts("(8) Procedure \'swap_topology\'     : module count is not enough for this test! +0");
  }
  else {
    swap_module((NODE *)plVar7,(NODE *)plVar15);
    if (*plVar7 != lVar14) goto LAB_00101f68;
LAB_001023fa:
    if ((*plVar15 != lVar17) || (!bVar20)) goto LAB_00101f68;
    puts("(7) Procedure \'swap_module\'       : correct!   +5");
    local_80 = local_80 + 5;
    if (iVar13 < 2) goto LAB_00102427;
LAB_00101f83:
    if (golden_num_modules < 3) {
      plVar15 = (long *)__ptr_03[1];
    }
    else {
      plVar15 = (long *)__ptr_03[2];
    }
    lVar14 = plVar15[2];
    lVar17 = plVar7[2];
    pplVar16 = (long **)(lVar14 + 0x18);
    if (plVar15 != *(long **)(lVar14 + 0x18)) {
      pplVar16 = (long **)(lVar14 + 0x20);
    }
    pplVar11 = (long **)(lVar17 + 0x20);
    if (plVar7 == *(long **)(lVar17 + 0x18)) {
      pplVar11 = (long **)(lVar17 + 0x18);
    }
    swap_topology((NODE *)plVar15,(NODE *)plVar7);
    bVar20 = false;
    if (plVar7[2] == lVar14) {
      bVar20 = lVar17 == plVar15[2];
    }
    if (plVar7 == *pplVar16) {
      if (plVar15 != *pplVar11) {
        bVar20 = false;
      }
    }
    else {
      bVar20 = false;
    }
    swap_topology((NODE *)plVar15,(NODE *)plVar7);
    if (plVar15[2] == lVar14) {
      if (plVar7[2] != lVar17) {
        bVar20 = false;
      }
    }
    else {
      bVar20 = false;
    }
    if (((plVar15 == *pplVar16) && (plVar7 == *pplVar11)) && (bVar20)) {
      puts("(8) Procedure \'swap_topology\'     : correct!   +10");
      local_80 = local_80 + 10;
    }
    else {
      puts("(8) Procedure \'swap_topology\'     : incorrect! +0");
      local_88 = 0;
    }
  }
  if (iVar9 < 1) {
    local_48[0] = 0;
    golden_postfix_traversal((NODE *)plVar6,local_70,__ptr_00);
    get_expression((NODE *)plVar6,iVar9,__ptr);
  }
  else {
    lVar14 = 0;
    lVar17 = ((ulong)(iVar4 - 2) + 1) * 0x10;
    do {
      *(undefined8 *)(__ptr_00 + lVar14) = 0;
      *(undefined4 *)(__ptr_00 + lVar14 + 8) = 2;
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != lVar17);
    local_48[0] = 0;
    golden_postfix_traversal((NODE *)plVar6,local_70,__ptr_00);
    get_expression((NODE *)plVar6,iVar9,__ptr);
    lVar14 = 0;
    bVar20 = true;
    do {
      while (*(long *)(__ptr_00 + lVar14) != *(long *)(__ptr + lVar14)) {
        lVar14 = lVar14 + 0x10;
        bVar20 = false;
        if (lVar14 == lVar17) goto LAB_001020d0;
      }
      if (*(int *)(__ptr_00 + lVar14 + 8) != *(int *)(__ptr + lVar14 + 8)) {
        bVar20 = false;
      }
      lVar14 = lVar14 + 0x10;
    } while (lVar14 != lVar17);
LAB_001020d0:
    if (!bVar20) {
      puts("(9) Procedure \'get_expression\'    : incorrect! +0");
      __printf_chk(1);
      pnt_expression(__ptr_00,iVar9);
      __printf_chk(1);
      pnt_expression(__ptr,iVar9);
      local_88 = 0;
      goto LAB_00102125;
    }
  }
  puts("(9) Procedure \'get_expression\'    : correct!   +15");
  local_80 = local_80 + 0xf;
LAB_00102125:
  iVar3 = golden_get_total_resource((NODE *)plVar6);
  iVar4 = get_total_resource((NODE *)plVar6);
  if (iVar3 == iVar4) {
    puts("(10)Procedure \'get_total_resource\': correct!   +5");
    local_80 = local_80 + 5;
  }
  else {
    puts("(10)Procedure \'get_total_resource\': incorrect! +0");
    __printf_chk(1,"    Golden: ");
    uVar5 = golden_get_total_resource((NODE *)plVar6);
    __printf_chk(1,"Total_resource = %d\n",uVar5);
    __printf_chk(1,"    Yours : ");
    uVar5 = get_total_resource((NODE *)plVar6);
    __printf_chk(1,"Total_resource = %d\n",uVar5);
    local_88 = 0;
  }
  free(__ptr_01);
  free(__ptr_02);
  free(__ptr_03);
  free(__ptr);
  free(__ptr_00);
  __printf_chk(1,"Your final score for this MP      : %d\n",local_80);
  puts("**************************** END VERIFICATION ****************************\n");
  return local_88;
}

