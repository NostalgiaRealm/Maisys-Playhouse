
/* ==== __break @ 004107be ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107be-004107be
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


