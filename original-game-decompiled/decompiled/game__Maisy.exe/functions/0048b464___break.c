
/* ==== __break @ 0048b464 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048b464-0048b464
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


