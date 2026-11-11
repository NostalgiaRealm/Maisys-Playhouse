
/* ==== __break @ 00489937 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489937-00489937
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


