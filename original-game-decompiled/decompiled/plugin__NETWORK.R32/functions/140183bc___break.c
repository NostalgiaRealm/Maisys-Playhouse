
/* ==== __break @ 140183bc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 140183bc-140183bc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


