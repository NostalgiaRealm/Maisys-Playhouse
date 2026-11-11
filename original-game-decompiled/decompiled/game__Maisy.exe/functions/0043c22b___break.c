
/* ==== __break @ 0043c22b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c22b-0043c22b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


