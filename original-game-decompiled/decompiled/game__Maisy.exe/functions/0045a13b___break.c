
/* ==== __break @ 0045a13b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045a13b-0045a13b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


