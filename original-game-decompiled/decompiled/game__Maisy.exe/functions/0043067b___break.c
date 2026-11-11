
/* ==== __break @ 0043067b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043067b-0043067b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


