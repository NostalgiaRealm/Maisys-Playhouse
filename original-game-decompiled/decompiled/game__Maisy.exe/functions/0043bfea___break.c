
/* ==== __break @ 0043bfea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bfea-0043bfea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


