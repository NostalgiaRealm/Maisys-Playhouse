
/* ==== __break @ 0044e4fb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e4fb-0044e4fb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


