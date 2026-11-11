
/* ==== __break @ 00470bca ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bca-00470bca
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


