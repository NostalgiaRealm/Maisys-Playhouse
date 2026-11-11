
/* ==== __break @ 0043bfec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bfec-0043bfec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


