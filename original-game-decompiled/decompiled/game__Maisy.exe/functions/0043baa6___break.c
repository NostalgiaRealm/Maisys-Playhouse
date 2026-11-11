
/* ==== __break @ 0043baa6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043baa6-0043baa6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


