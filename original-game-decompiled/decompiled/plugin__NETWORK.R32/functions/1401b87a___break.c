
/* ==== __break @ 1401b87a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87a-1401b87a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


