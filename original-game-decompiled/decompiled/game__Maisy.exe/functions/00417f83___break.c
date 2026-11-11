
/* ==== __break @ 00417f83 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00417f83-00417f83
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


