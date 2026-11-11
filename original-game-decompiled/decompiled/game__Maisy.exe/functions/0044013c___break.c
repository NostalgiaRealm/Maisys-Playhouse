
/* ==== __break @ 0044013c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044013c-0044013c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


