
/* ==== __break @ 00414def ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00414def-00414def
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


