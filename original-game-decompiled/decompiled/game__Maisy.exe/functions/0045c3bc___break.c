
/* ==== __break @ 0045c3bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045c3bc-0045c3bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


