
/* ==== __break @ 1401a3cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401a3cf-1401a3cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


