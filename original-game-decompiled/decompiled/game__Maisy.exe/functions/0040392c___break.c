
/* ==== __break @ 0040392c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040392c-0040392c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


