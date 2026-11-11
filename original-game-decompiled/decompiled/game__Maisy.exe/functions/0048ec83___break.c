
/* ==== __break @ 0048ec83 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048ec83-0048ec83
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


