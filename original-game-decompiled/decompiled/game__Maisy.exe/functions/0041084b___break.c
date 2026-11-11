
/* ==== __break @ 0041084b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041084b-0041084b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


