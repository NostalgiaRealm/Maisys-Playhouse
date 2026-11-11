
/* ==== __break @ 0043bfeb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bfeb-0043bfeb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


