
/* ==== __break @ 0043c239 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c239-0043c239
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


