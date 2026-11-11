
/* ==== __break @ 0041ef8c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041ef8c-0041ef8c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


