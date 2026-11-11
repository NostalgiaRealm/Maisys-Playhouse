
/* ==== __break @ 0048faba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048faba-0048faba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


