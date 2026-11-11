
/* ==== __break @ 0043bcea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bcea-0043bcea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


