
/* ==== __break @ 00449964 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00449964-00449964
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


