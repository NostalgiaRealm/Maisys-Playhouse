
/* ==== __break @ 0048b4f8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048b4f8-0048b4f8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


