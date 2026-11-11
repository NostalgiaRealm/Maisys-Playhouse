
/* ==== __break @ 1401b87c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 1401b87c-1401b87c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


