
/* ==== __break @ 00489b7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489b7c-00489b7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


