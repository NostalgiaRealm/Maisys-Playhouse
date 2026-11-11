
/* ==== __break @ 0048ec86 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048ec86-0048ec86
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


