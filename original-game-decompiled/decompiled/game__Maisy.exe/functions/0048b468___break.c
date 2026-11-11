
/* ==== __break @ 0048b468 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048b468-0048b468
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


