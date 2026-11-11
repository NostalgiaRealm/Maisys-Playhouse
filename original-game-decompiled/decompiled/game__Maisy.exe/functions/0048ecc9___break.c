
/* ==== __break @ 0048ecc9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048ecc9-0048ecc9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


