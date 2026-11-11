
/* ==== __break @ 00470bba ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bba-00470bba
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


