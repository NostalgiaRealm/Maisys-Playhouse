
/* ==== __break @ 0043c72b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c72b-0043c72b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


